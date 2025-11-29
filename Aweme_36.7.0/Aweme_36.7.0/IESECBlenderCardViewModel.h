@class NSDictionary, IESECBlenderContext, NSString;
@protocol IESECBlenderViewModelDelegate, IESECBlenderNodeProtocol;

@interface IESECBlenderCardViewModel : NSObject <IESECBlenderViewModelProtocol>

@property (retain, nonatomic) id<IESECBlenderNodeProtocol> node;
@property (retain, nonatomic) NSDictionary *nodeGlobalInfo;
@property (weak, nonatomic) id<IESECBlenderViewModelDelegate> delegate;
@property (weak, nonatomic) IESECBlenderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
