@class NSMutableArray;

@interface AWEPOIEntryViewReusePool : NSObject

@property (retain, nonatomic) NSMutableArray *separatorLinePool;
@property (retain, nonatomic) NSMutableArray *normalLabelPool;
@property (retain, nonatomic) NSMutableArray *grayLabelPool;
@property (retain, nonatomic) NSMutableArray *iconImagePool;
@property (retain, nonatomic) NSMutableArray *localIconImagePool;
@property (retain, nonatomic) NSMutableArray *usedPool;

- (void)resetUsedPool;
- (id)dequeueReusableViewForEntryView:(unsigned long long)a0;
- (id)reusePoolWithStyle:(unsigned long long)a0;
- (id)creatReuseableViewWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
