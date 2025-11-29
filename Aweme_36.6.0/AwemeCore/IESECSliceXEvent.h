@class NSString, NSDictionary, IESECSliceXBaseElementView;

@interface IESECSliceXEvent : NSObject <IESECSliceXEvent>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) IESECSliceXBaseElementView *activeView;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSDictionary *originActionDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
