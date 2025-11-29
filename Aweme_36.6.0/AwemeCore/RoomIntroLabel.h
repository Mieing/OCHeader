@class NSString;

@interface RoomIntroLabel : IESLivePBBaseMessage

@property (nonatomic) int labelTag;
@property (copy, nonatomic) NSString *labelName;
@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *labelIcon;
@property (copy, nonatomic) NSString *typeName;
@property (copy, nonatomic) NSString *showText;
@property (nonatomic) BOOL selected;
@property (nonatomic) long long showOrder;

+ (id)descriptor;

@end
