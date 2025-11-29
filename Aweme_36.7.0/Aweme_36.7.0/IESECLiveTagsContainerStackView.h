@class NSNumber;

@interface IESECLiveTagsContainerStackView : UIStackView

@property (copy, nonatomic) id /* block */ onHideByCustomBlock;
@property (retain, nonatomic) NSNumber *minShowNum;

- (id)getLocalSuperView:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
