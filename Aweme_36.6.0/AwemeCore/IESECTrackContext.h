@class IESECOnceHelper, IESECTrackBuilder;
@protocol IESECTrackBaseProtocol;

@interface IESECTrackContext : NSObject

@property (retain, nonatomic) id<IESECTrackBaseProtocol> baseParams;
@property (retain, nonatomic) IESECOnceHelper *onceHelper;
@property (nonatomic) BOOL openWithSaaS;
@property (retain, nonatomic) IESECTrackBuilder *builder;

- (id)initWithBaseParams:(id)a0;
- (void)updateBaseParams:(id)a0;
- (void).cxx_destruct;

@end
