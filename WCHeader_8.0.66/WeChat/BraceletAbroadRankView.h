@class NSString, DeviceRankInfo, UILabel;
@protocol BraceletAbroadRankViewDelegate, NSObject;

@interface BraceletAbroadRankView : UIView <ShareViewDelegate> {
    DeviceRankInfo *m_rankInfo;
    UILabel *m_oShareLabel;
}

@property (weak, nonatomic) id<BraceletAbroadRankViewDelegate, NSObject> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
