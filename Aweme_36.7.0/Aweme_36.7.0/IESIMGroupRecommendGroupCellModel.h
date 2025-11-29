@class UIColor, NSString, NSArray, NSDictionary;
@protocol IESIMGroupRecommendCellConfigurationProtocol;

@interface IESIMGroupRecommendGroupCellModel : NSObject <IESIMGroupRecommendCellModelProtocol> {
    void /* function */ idString;
    void /* function */ name;
    void /* function */ avatar;
    void /* function */ desc;
    void /* function */ tags;
    void /* function */ buttonText;
    void /* function */ buttonStatusChanged;
    void /* unknown type, empty encoding */ lastClickTime;
    void /* unknown type, empty encoding */ rawModel;
    void /* unknown type, empty encoding */ buttonStateConfig;
    void /* unknown type, empty encoding */ actionToStateConfig;
    void /* unknown type, empty encoding */ currentCheckCode;
    void /* function */ extra;
    void /* function */ trackingExt;
    void /* unknown type, empty encoding */ loadingView;
    void /* function */ cellTapped;
    void /* unknown type, empty encoding */ hasExposure;
    void /* unknown type, empty encoding */ rank;
}

@property (nonatomic) long long groupID;
@property (nonatomic, copy) NSString *idString;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *avatar;
@property (nonatomic) int memberCount;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSArray *tags;
@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic) BOOL needClipAvatar;
@property (nonatomic, retain) UIColor *buttonTextColor;
@property (nonatomic, retain) UIColor *buttonBackgroundColor;
@property (nonatomic) BOOL buttonEnable;
@property (nonatomic, retain) id<IESIMGroupRecommendCellConfigurationProtocol> cellConfiguration;
@property (nonatomic, copy) id /* block */ buttonStatusChanged;
@property (nonatomic, copy) NSDictionary *extra;
@property (nonatomic, copy) NSDictionary *trackingExt;
@property (nonatomic, copy) id /* block */ cellTapped;

- (void)buttonClickedWithType:(unsigned long long)a0;
- (void)triggerExposureOnceWithRank:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
