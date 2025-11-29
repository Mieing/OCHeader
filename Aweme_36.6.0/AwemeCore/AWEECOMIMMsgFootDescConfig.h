@class NSArray, AWEECOMIMFootDescActionButtonStyle;

@interface AWEECOMIMMsgFootDescConfig : NSObject

@property (nonatomic) BOOL enableNewFooter;
@property (copy, nonatomic) NSArray *whiteList;
@property (copy, nonatomic) NSArray *blackList;
@property (retain, nonatomic) AWEECOMIMFootDescActionButtonStyle *buttonStyle;

+ (id)fallbackConfig;
+ (id)validKeys;

- (void)updateWithButtonStyleDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
