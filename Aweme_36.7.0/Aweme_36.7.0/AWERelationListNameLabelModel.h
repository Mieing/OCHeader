@class NSString, UIImage, AWEConcernFansLabelModel, NSAttributedString;

@interface AWERelationListNameLabelModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSAttributedString *attributedName;
@property (retain, nonatomic) UIImage *verifiedIconImage;
@property (copy, nonatomic) NSString *relationTag;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isInDeactivateBufferPeriod;
@property (retain, nonatomic) AWEConcernFansLabelModel *fansLabelModel;

- (void).cxx_destruct;

@end
