@class NSNumber, NSString, NSDictionary;

@interface SAMIVCResultInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusText;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *data;
@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSDictionary *reservedInfo;
@property (readonly, nonatomic) NSString *originVid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
