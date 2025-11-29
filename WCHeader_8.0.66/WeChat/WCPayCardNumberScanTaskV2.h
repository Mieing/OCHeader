@class NSData, NSString, WCPayBizOcrImageCgi;
@protocol WCPayCardNumberScanTaskV2Delegate;

@interface WCPayCardNumberScanTaskV2 : NSObject <WCPayBizOcrImageCgiDelegate>

@property (retain) NSData *m_imageData;
@property int source;
@property unsigned int seqNum;
@property (retain) NSString *sessionKey;
@property (weak) id<WCPayCardNumberScanTaskV2Delegate> m_delegate;
@property (retain) WCPayBizOcrImageCgi *m_cgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0 delegate:(id)a1 source:(unsigned int)a2 seqNum:(unsigned int)a3 sessionKey:(id)a4;
- (void)updateDelegate:(id)a0;
- (void)start;
- (void)onWCPayBizOcrImageCgiResp:(id)a0;
- (void)onWCPayBizOcrImageCgiNetworkError:(id)a0;
- (id)matchImageFromSeqNum:(unsigned int)a0 leftTop:(struct CGPoint { double x0; double x1; })a1 rightTop:(struct CGPoint { double x0; double x1; })a2 rightBottom:(struct CGPoint { double x0; double x1; })a3 leftBottom:(struct CGPoint { double x0; double x1; })a4;
- (id)sizeImage:(id)a0 leftTop:(struct CGPoint { double x0; double x1; })a1 rightTop:(struct CGPoint { double x0; double x1; })a2 rightBottom:(struct CGPoint { double x0; double x1; })a3 leftBottom:(struct CGPoint { double x0; double x1; })a4;
- (id)cropImage:(id)a0 leftTop:(struct CGPoint { double x0; double x1; })a1 rightTop:(struct CGPoint { double x0; double x1; })a2 rightBottom:(struct CGPoint { double x0; double x1; })a3 leftBottom:(struct CGPoint { double x0; double x1; })a4;
- (id)image:(id)a0 MaskingPath:(id)a1;
- (double)angleFromLeftTop:(struct CGPoint { double x0; double x1; })a0 rightTop:(struct CGPoint { double x0; double x1; })a1;
- (id)image:(id)a0 rotatedByAngle:(double)a1;
- (id)imageTrimmingTransparent:(id)a0;
- (void).cxx_destruct;

@end
