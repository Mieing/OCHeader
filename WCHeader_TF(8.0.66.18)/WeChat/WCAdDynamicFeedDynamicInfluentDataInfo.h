@class WCAdFinderLiveProductInfo, NSString, WCAdDynamicFeedInfluentDataInfo;

@interface WCAdDynamicFeedDynamicInfluentDataInfo : NSObject <NSCoding>

@property (retain, nonatomic) WCAdDynamicFeedInfluentDataInfo *influentData;
@property (retain, nonatomic) WCAdFinderLiveProductInfo *adFinderLiveProductInfo;
@property (retain, nonatomic) NSString *dynamicUpdateMD5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
