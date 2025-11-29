@class NSString, NSArray;

@interface AWEIMFTSMultiRecallData : NSObject <AWEIMFTSMultiRecallDataProtocol>

@property (copy, nonatomic) NSString *convId;
@property (nonatomic) long long sortOrder;
@property (copy, nonatomic) NSArray *subDataList;
@property (nonatomic) long long subDataFlag;
@property (copy, nonatomic) NSArray *keyElementList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
