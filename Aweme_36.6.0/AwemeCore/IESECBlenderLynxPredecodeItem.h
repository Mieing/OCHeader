@class NSString, LynxTemplateBundle;

@interface IESECBlenderLynxPredecodeItem : NSObject

@property (retain, nonatomic) NSString *templateUrl;
@property (retain, nonatomic) LynxTemplateBundle *bundle;
@property (nonatomic) long long loadState;
@property (nonatomic) long long sourceType;

- (void).cxx_destruct;

@end
