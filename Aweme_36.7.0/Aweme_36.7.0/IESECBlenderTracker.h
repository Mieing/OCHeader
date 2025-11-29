@class IESECBlenderContext, NSString, IESECTracker, UIResponder;

@interface IESECBlenderTracker : NSObject <IESECBlenderTracker>

@property (retain, nonatomic) IESECTracker *tracker;
@property (weak, nonatomic) UIResponder *host;
@property (weak, nonatomic) IESECBlenderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
