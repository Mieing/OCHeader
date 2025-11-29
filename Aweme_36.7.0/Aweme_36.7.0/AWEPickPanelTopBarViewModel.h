@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEPickPanelTopBarViewModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long pickedCount;
@property (nonatomic) long long refreshPickQuota;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ closePickPanelBlock;

- (id)initWithAwemeModel:(id)a0 enterFrom:(id)a1 params:(id)a2;
- (id)pickedCountStringValue;
- (void)updateVideoPickedCountWithPickStatus:(BOOL)a0;
- (void)syncPickedCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)titleLabelText;

@end
