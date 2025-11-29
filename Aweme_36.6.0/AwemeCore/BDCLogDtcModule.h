@class BDCLogDtcTrdModule, BDCLogDtcFsbModule, BDCLogDtcMsdModule;

@interface BDCLogDtcModule : NSObject

@property (readonly, nonatomic) BDCLogDtcMsdModule *msd;
@property (readonly, nonatomic) BDCLogDtcTrdModule *trd;
@property (readonly, nonatomic) BDCLogDtcFsbModule *fsb;

@end
