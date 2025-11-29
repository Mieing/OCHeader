@class NSString, NSMutableArray, SequenceInfo;

@interface RedPointCtrlInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *redPointList;
@property (retain, nonatomic) SequenceInfo *seqInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_redPointList;
+ (void)PBArrayAdd_seqInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
