@class NSString;

@interface WCPayOrderDetailNormalCellInfo : NSObject

@property (retain, nonatomic) NSString *m_nsKey;
@property (retain, nonatomic) NSString *m_nsValue;
@property (retain, nonatomic) NSString *m_nsJumpedUrl;
@property (nonatomic) unsigned int m_uiJumpedType;
@property (nonatomic) BOOL m_bIsSegmentationCell;

- (void).cxx_destruct;

@end
