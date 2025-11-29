@interface WCImageUtil : NSObject

+ (id)generatePaddedImgWithCentralImg:(id)a0 centralSize:(struct CGSize { double x0; double x1; })a1 targetSize:(struct CGSize { double x0; double x1; })a2 fillColor:(id)a3;
+ (id)generateCommentPlaceHolderImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 imgName:(id)a1;
+ (id)getTimeLineCommentPlaceHolderImageWithAspectRatio3_4;
+ (id)getTimeLineCommentPlaceHolderImageWithAspectRatio1_1;
+ (id)getTimeLineCommentPlaceHolderImageWithAspectRatio4_3;
+ (id)getMsgListCommentPlaceHolderImageWithAspectRatio3_4;
+ (id)getMsgListCommentPlaceHolderImageWithAspectRatio1_1;
+ (id)getMsgListCommentPlaceHolderImageWithAspectRatio4_3;
+ (id)getDetailCommentPlaceHolderImageWithAspectRatio3_4;
+ (id)getDetailCommentPlaceHolderImageWithAspectRatio1_1;
+ (id)getDetailCommentPlaceHolderImageWithAspectRatio4_3;
+ (id)getTimeLineCommentLoadFailImageWithRatio:(double)a0;
+ (id)getTLEmoticonThumbLoadFailImageWithTargetSize:(struct CGSize { double x0; double x1; })a0;

@end
