@class NSString;

@interface ACCPieceSwitchBlockSubscirber : NSObject <ACCSequenceEditServicePlayerSubscriber>

@property (copy, nonatomic) id /* block */ willTransferBlock;
@property (copy, nonatomic) id /* block */ didTransferBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
