@class NSString, NSMutableArray, NSObject;

@interface AWETrackerDataTransmissionNode : NSObject

@property (nonatomic) double allocTimeStamp;
@property (retain, nonatomic) NSString *dataNodeClassStr;
@property (nonatomic) unsigned long long dataNodeInstanceAddr;
@property (weak, nonatomic) AWETrackerDataTransmissionNode *preTransNode;
@property (retain, nonatomic) NSMutableArray *nextTransNodes;
@property (weak, nonatomic) NSObject *obj;

+ (id)nodeWithObj:(id)a0;

- (id)initWithObj:(id)a0;
- (id)getNextTransNodes;
- (void).cxx_destruct;
- (id)description;

@end
