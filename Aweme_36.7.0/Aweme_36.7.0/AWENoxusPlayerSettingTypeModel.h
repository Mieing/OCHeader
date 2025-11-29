@class NSString;

@interface AWENoxusPlayerSettingTypeModel : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long speedType;
@property (nonatomic) long long newSpeedType;
@property (nonatomic) unsigned long long pixelType;
@property (nonatomic) double value;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isFocused;
@property (nonatomic) BOOL isGuide;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *minRatio;
@property (copy, nonatomic) NSString *eid;
@property (nonatomic) BOOL isFinalGuide;
@property (nonatomic) BOOL isRemotePlay;

- (void).cxx_destruct;

@end
