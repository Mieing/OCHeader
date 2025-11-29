@class MMBGMSelectedOptionalConfig;

@interface MMBGMSelectedConfig : NSObject

@property (nonatomic) int musicBussId;
@property (retain, nonatomic) MMBGMSelectedOptionalConfig *optionalConfig;

- (id)genFixedDataReportDict;
- (void).cxx_destruct;

@end
