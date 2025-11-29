@class NSString, NSDictionary, HTSEventContext, NSNumber;

@interface IESLivePushUserProfileParamsModel : NSObject

@property (copy, nonatomic) NSString *uID;
@property (copy, nonatomic) NSString *secUID;
@property (nonatomic) BOOL animated;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (nonatomic) BOOL targetIsAnchor;
@property (nonatomic) BOOL roomUseHostInfo;
@property (copy, nonatomic) NSString *currentOpenID;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;

@end
