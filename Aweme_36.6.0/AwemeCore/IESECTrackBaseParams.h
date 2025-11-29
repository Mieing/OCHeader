@class NSDictionary, NSString;
@protocol IESECAdTrackContext;

@interface IESECTrackBaseParams : NSObject <IESECTrackBaseProtocol>

@property (copy, nonatomic) NSDictionary *bussinissParams;
@property (copy, nonatomic) id<IESECAdTrackContext> adContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addBussinissParams:(id)a0;
- (void).cxx_destruct;

@end
