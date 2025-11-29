@class NSNumber, BDECPigeonMessageDataSourceOptions, NSString;

@interface AWEECOMIMPaasMessagesDataSourceOptionsNew : NSObject <AWEECOMIMPaasMessagesDataSourceOptionsProtocol>

@property (retain, nonatomic) BDECPigeonMessageDataSourceOptions *messagesDataSourceOptions;
@property (retain, nonatomic) NSNumber *initialMessageCount;
@property (retain, nonatomic) NSNumber *messageCountPerPage;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (nonatomic) int inbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)convertToPigeonMessagesDataSourceOptions;
- (void).cxx_destruct;
- (id)init;

@end
