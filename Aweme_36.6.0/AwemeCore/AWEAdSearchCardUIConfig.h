@class NSString;

@interface AWEAdSearchCardUIConfig : NSObject <AWEAdSearchCardUIConfig>

@property (copy, nonatomic) NSString *headerText;
@property (nonatomic) BOOL hideHeader;
@property (nonatomic) BOOL hideBottomDivideLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultUIConfig;

- (void).cxx_destruct;

@end
