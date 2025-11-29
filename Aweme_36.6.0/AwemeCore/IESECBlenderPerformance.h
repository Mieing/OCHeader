@class IESECBlenderContext, NSMutableDictionary, NSString;

@interface IESECBlenderPerformance : NSObject <IESECBlenderPerformance>

@property (retain, nonatomic) NSMutableDictionary *performance;
@property (weak, nonatomic) IESECBlenderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
