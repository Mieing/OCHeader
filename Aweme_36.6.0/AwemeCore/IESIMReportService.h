@class NSString;
@protocol IESIMConversationProtocol;

@interface IESIMReportService : HTSService <IESIMReportService>

@property (weak, nonatomic) id<IESIMConversationProtocol> con;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
