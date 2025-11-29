@class NSArray, UIImage;

@interface WCBizMultiImageBrowseData : NSObject

@property (retain, nonatomic) NSArray *m_arrBrowseImgItem;
@property (nonatomic) unsigned int m_uiStartIndex;
@property (retain, nonatomic) UIImage *m_oWaitBackGroundImg;
@property (nonatomic) BOOL m_bCached;

- (void)dealloc;
- (void).cxx_destruct;

@end
