@interface IntelligentUtil : NSObject

+ (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1;
+ (id)GenNoResultViewForKeyword:(id)a0 width:(double)a1 height:(double)a2 prefix:(id)a3 suffix:(id)a4 textColor:(id)a5;
+ (id)GenNoResultViewForKeyword:(id)a0 width:(double)a1 height:(double)a2 prefix:(id)a3 suffix:(id)a4 textColor:(id)a5 textFontSize:(double)a6;
+ (id)GenIntelligentSearchLabelForKeyword:(id)a0 width:(double)a1 height:(double)a2 prefix:(id)a3 suffix:(id)a4 textColor:(id)a5 highlightColor:(id)a6;
+ (id)GenIntelligentSearchLabelForKeyword:(id)a0 width:(double)a1 height:(double)a2 prefix:(id)a3 suffix:(id)a4 textColor:(id)a5 highlightColor:(id)a6 textFontSize:(double)a7;
+ (id)getNoResultPrefixStrWithSearchType:(unsigned int)a0;
+ (id)getNoResultSuffixStrWithSearchType:(unsigned int)a0;
+ (id)getSearchResultCountLabelPrefixStrWithSearchType:(unsigned int)a0;
+ (id)getSearchResultCountLabelSuffixStrWithSearchType:(unsigned int)a0;
+ (struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })cvMatWithImage:(id)a0;
+ (struct shared_ptr<wevision2::PixelBuffer> { struct PixelBuffer *x0; struct __shared_weak_count *x1; })pixelBufferWithImage:(id)a0;
+ (id)getTargetRectImageFromOriginalImage:(id)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)convertNumberArrToStringArr:(id)a0;
+ (void)showInfoView:(id)a0 imageScrollView:(id)a1 searchText:(id)a2 dicLocateOcrTextPoint:(id)a3 operateOcrTextPointBlcok:(id /* block */)a4;
+ (id)getMessageIDFromMsg:(id)a0;
+ (unsigned int)getReportIntelligentMsgDoClickMediaWithWrap:(id)a0;
+ (unsigned int)getSearchMsgTypeWithMsg:(id)a0;
+ (unsigned int)getCurrentTimeUsec;

@end
