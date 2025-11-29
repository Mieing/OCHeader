@class NSString;

@interface ImagePreviewV2 : GPBMessage

@property (copy, nonatomic) NSString *data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *metaKey;
@property (nonatomic) BOOL hasMetaKey;

+ (id)descriptor;

@end
