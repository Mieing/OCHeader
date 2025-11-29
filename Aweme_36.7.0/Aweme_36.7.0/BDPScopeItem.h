@class NSString, BDPScopeGameExtension;

@interface BDPScopeItem : NSObject

@property (retain, nonatomic, setter=setGamExtension:) BDPScopeGameExtension *gameExtension;
@property (copy, nonatomic) NSString *scope;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL necessary;
@property (nonatomic) BOOL granted;
@property (nonatomic) double cellHeight;

- (id)gameExtension;
- (void).cxx_destruct;

@end
