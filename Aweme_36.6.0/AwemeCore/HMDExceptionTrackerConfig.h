@class NSDictionary, NSArray, NSString;

@interface HMDExceptionTrackerConfig : HMDTrackerConfig

@property (nonatomic) long long openOptions;
@property (nonatomic) BOOL ignoreDuplicate;
@property (nonatomic) BOOL ignoreTryCatch;
@property (retain, nonatomic) NSDictionary *catchMethodList;
@property (retain, nonatomic) NSArray *systemProtectList;
@property (retain, nonatomic) NSDictionary *betterSystemProtectList;
@property (nonatomic) BOOL enableNSException;
@property (nonatomic) BOOL uploadAlog;
@property (nonatomic) BOOL enableMachException;
@property (retain, nonatomic) NSString *machExceptionPrefix;
@property (retain, nonatomic) NSDictionary *machExceptionList;
@property (retain, nonatomic) NSDictionary *machExceptionCloud;
@property (retain, nonatomic) NSDictionary *dispatchMainThread;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (long long)startWeight;
- (void).cxx_destruct;

@end
