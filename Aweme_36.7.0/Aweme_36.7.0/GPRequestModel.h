@class NSString, NSDictionary, NSURL, GPMutipartFormData;

@interface GPRequestModel : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL needCommonParams;
@property (copy, nonatomic) NSDictionary *headerField;
@property (nonatomic) double timeout;
@property (retain, nonatomic) Class objectClass;
@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) GPMutipartFormData *formData;

- (void).cxx_destruct;

@end
