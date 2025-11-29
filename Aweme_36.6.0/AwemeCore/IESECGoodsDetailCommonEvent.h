@class NSString, NSMutableDictionary, UIResponder, NSIndexPath;

@interface IESECGoodsDetailCommonEvent : NSObject <IESECGoodsDetailEvent>

@property (retain, nonatomic) UIResponder *sender;
@property (nonatomic) unsigned long long eventType;
@property (copy, nonatomic) NSString *componentUniqueID;
@property (copy, nonatomic) NSString *componentEventUniqueID;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) id userInfoContext;
@property (retain, nonatomic) NSMutableDictionary *trackContext;
@property (nonatomic) BOOL shouldRefreshView;
@property (nonatomic) BOOL needCheckLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonEventWithComponentUID:(id)a0 componentEventUID:(id)a1 eventType:(unsigned long long)a2 trackContext:(id)a3 userInfoContext:(id)a4 shouldRefreshView:(BOOL)a5;

- (void).cxx_destruct;

@end
