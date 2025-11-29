@class NSString;

@interface WCTableViewCellBaseConfig : NSObject

@property (nonatomic) unsigned long long selectionStyle;
@property (nonatomic) long long editStyle;
@property (nonatomic) SEL clickAction;
@property (weak, nonatomic) id clickTarget;
@property (retain, nonatomic) NSString *nsPathKey;
@property (weak, nonatomic) id displayTarget;
@property (nonatomic) SEL willDisplayAction;

- (void)addTarget:(id)a0 clickAction:(SEL)a1;
- (void).cxx_destruct;

@end
