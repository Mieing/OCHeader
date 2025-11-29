@class NSNumber, NSString, NSDictionary;

@interface IESECLiveTaskDetailResponse : IESECLiveApiBaseModel

@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *successMsg;
@property (copy, nonatomic) NSString *resource;
@property (copy, nonatomic) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
