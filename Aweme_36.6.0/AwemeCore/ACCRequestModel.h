@class NSString, NSDictionary, NSURL;

@interface ACCRequestModel : NSObject <ACCRequestModelProtocol>

@property (retain, nonatomic) Class requestSerializer;
@property (nonatomic) unsigned long long requestType;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL needCommonParams;
@property (retain, nonatomic) NSDictionary *headerField;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL autoResume;
@property (retain, nonatomic) Class objectClass;
@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) id bodyBlock;
@property (copy, nonatomic) NSString *targetPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
