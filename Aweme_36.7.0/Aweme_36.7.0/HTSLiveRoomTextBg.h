@class NSString, HTSLiveRoomTextBgStyle;

@interface HTSLiveRoomTextBg : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *description_p;
@property (retain, nonatomic) HTSLiveRoomTextBgStyle *titleStyle;
@property (nonatomic) BOOL hasTitleStyle;
@property (retain, nonatomic) HTSLiveRoomTextBgStyle *descriptionStyle;
@property (nonatomic) BOOL hasDescriptionStyle;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *showId;

+ (id)descriptor;

@end
