@class NSString, NSDictionary, NSNumber, NSMutableArray;

@interface BDECPigeonBizPageTrackParamsModel : NSObject

@property (copy, nonatomic) NSDictionary *pageCommonParams;
@property (retain, nonatomic) NSNumber *showTime;
@property (retain, nonatomic) NSNumber *clickTime;
@property (retain, nonatomic) NSMutableArray *clickSuccessActionList;
@property (retain, nonatomic) NSMutableArray *clickFailureActionList;
@property (copy, nonatomic) NSString *clickErrorMsg;
@property (retain, nonatomic) NSMutableArray *allActionTypeList;
@property (nonatomic) BOOL isClickResultListEvent;
@property (retain, nonatomic) NSMutableArray *ongoingActionTypeList;
@property (nonatomic) BOOL didTrackEvent;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *resultEventName;
@property (copy, nonatomic) NSString *dataId;
@property (copy, nonatomic) NSString *locationType;
@property (copy, nonatomic) NSString *locationSubType;
@property (copy, nonatomic) NSString *clickArea;
@property (copy, nonatomic) NSString *clickUUID;
@property (copy, nonatomic) NSDictionary *clientExtraParams;
@property (copy, nonatomic) NSDictionary *otherParams;
@property (nonatomic) BOOL onlyOnce;

+ (id)viewModelWithLocationType:(id)a0 locationSubType:(id)a1 otherParams:(id)a2 onlyOnce:(BOOL)a3;
+ (id)clickModelWithLocationType:(id)a0 locationSubType:(id)a1 clickArea:(id)a2 otherParams:(id)a3;
+ (id)viewModelWithLocationType:(id)a0 locationSubType:(id)a1 otherParams:(id)a2;
+ (id)viewModelWithTrackInfo:(id)a0 otherParams:(id)a1;
+ (id)clickModelWithTrackInfo:(id)a0 otherParams:(id)a1;

- (void).cxx_destruct;

@end
