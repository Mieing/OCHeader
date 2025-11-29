@class NSString, LabelDataV2;

@interface LabelDataMapV2 : GPBMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL hasKey;
@property (retain, nonatomic) LabelDataV2 *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
