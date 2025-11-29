@class NSString;

@interface AWEMRUploadComponentInfo : NSObject

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long uiStyle;
@property (nonatomic) long long showTimeStamp;

- (void).cxx_destruct;

@end
