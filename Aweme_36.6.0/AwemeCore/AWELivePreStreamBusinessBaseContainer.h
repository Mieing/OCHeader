@class NSMutableArray, NSString, AWELivePreStreamConfigCenter, AWELivePreStreamContext;

@interface AWELivePreStreamBusinessBaseContainer : NSObject <AWELivePreStreamBusinessBaseContainerProtocol>

@property (retain, nonatomic) AWELivePreStreamContext *context;
@property (retain, nonatomic) AWELivePreStreamConfigCenter *configCenter;
@property (retain, nonatomic) NSMutableArray *businessElementsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 context:(id)a1;
- (void)addElementToArray:(id)a0;
- (void)addElementByClassName:(id)a0;
- (void)setupBusinessContainer;
- (Class)elementClassWithElementName:(id)a0;
- (void).cxx_destruct;
- (long long)elementCount;
- (Class)classForName:(id)a0;

@end
