@class NSString, AWEECOMIMFTSSyncResultData;

@interface AWEECOMIMFTSMessageCount : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long count;
@property (nonatomic) long long sortOrder;
@property (retain, nonatomic) AWEECOMIMFTSSyncResultData *result;

- (void).cxx_destruct;

@end
