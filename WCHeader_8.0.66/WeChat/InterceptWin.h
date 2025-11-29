@class NSString, JumpItem;

@interface InterceptWin : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) JumpItem *leftButton;
@property (retain, nonatomic) JumpItem *rightButton;
@property (nonatomic) unsigned int winType;
@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int iconType;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;

@end
