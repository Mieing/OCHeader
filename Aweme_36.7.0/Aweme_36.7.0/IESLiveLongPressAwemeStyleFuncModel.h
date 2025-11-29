@class NSDictionary, NSString, UIImage;
@protocol IESLiveRoomService;

@interface IESLiveLongPressAwemeStyleFuncModel : IESLiveDynamicModel

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSDictionary *trackContext;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long sectionType;
@property (nonatomic) long long priority;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ preClickBlock;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL hasRecommend;
@property (nonatomic) BOOL needShowArrow;

- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)initModel;
- (void)handleClickBlock;
- (void).cxx_destruct;

@end
