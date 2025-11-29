@class NSString, AWERVLVMetaInfoView;

@interface AWERVLVMetaInfoElement : AWERVVideoInfoBaseElement <AWERVLVMetaInfoViewDelegate>

@property (retain, nonatomic) AWERVLVMetaInfoView *metaInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
