@class NSMutableArray;

@interface AWEIMDUXTextTagContainer : UIView

@property (retain, nonatomic) NSMutableArray *showingTextTag;

- (long long)__iesimTagStyleFromUserTagStyle:(long long)a0;
- (void)customizeTag:(id)a0 withUserTagStyle:(long long)a1;
- (void)configWithTagInfoArray:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)layoutSubviews;

@end
