@class NSString;

@interface WAUserGuideParam : NSObject

@property (nonatomic) unsigned int dialogType;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *pagAnim;
@property (nonatomic) int pagAnimRepeatCount;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (retain, nonatomic) NSString *gotoText;
@property (copy, nonatomic) id /* block */ gotoAction;

- (void).cxx_destruct;

@end
