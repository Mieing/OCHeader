@class NSString;
@protocol AnnieXCardModelProtocol;

@interface AWEGrouponLifeFeedsLynxPreloadDataSource : NSObject <AWEGrouponLifeFeedsLynxCardDataSource>

@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cardFrame;
@property (nonatomic) BOOL forcedUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCardModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
