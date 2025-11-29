@class NSString, AWEIMFTSResultData;

@interface AWEIMFTSMessageCount : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long count;
@property (nonatomic) long long sortOrder;
@property (retain, nonatomic) AWEIMFTSResultData *result;

- (void).cxx_destruct;

@end
