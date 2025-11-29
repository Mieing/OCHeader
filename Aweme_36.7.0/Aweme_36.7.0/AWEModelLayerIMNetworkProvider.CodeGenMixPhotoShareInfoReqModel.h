@class NSString, NSNumber;

@interface AWEModelLayerIMNetworkProvider.CodeGenMixPhotoShareInfoReqModel : NSObject

@property (nonatomic, retain) NSString *styleId;
@property (nonatomic, retain) NSString *photo;
@property (nonatomic, retain) NSNumber *mixNumUpperLimit;
@property (nonatomic, retain) NSNumber *styleType;
@property (nonatomic, retain) NSNumber *shareTime;
@property (nonatomic, retain) NSString *styleUrl;
@property (nonatomic, retain) NSNumber *shareTaskId;
@property (nonatomic, retain) NSString *styleTitle;
@property (nonatomic, retain) NSString *loraSlotDetail;

- (id)toJSONString;
- (id)initWithStyleId:(id)a0 photo:(id)a1 mixNumUpperLimit:(id)a2 styleType:(id)a3 shareTime:(id)a4 styleUrl:(id)a5 shareTaskId:(id)a6 styleTitle:(id)a7 loraSlotDetail:(id)a8;
- (void).cxx_destruct;
- (id)init;

@end
