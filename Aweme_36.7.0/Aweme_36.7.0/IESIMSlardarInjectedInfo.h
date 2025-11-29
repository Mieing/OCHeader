@class NSString;

@interface IESIMSlardarInjectedInfo : NSObject

@property (retain, nonatomic) id value;
@property (copy, nonatomic) NSString *bizKey;
@property (nonatomic) long long pageType;
@property (nonatomic) long long injectInfoType;
@property (nonatomic) BOOL disableIndex;
@property (copy, nonatomic) NSString *identifyKey;

- (void).cxx_destruct;

@end
