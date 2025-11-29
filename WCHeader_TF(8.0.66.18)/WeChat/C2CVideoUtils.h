@interface C2CVideoUtils : NSObject

+ (BOOL)isOpenSlientSaveVideo;
+ (BOOL)IsOpenRawPreloadSvrRecall;
+ (id)generateDownloadArgsWrap:(id)a0;
+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })getRawRecallBizReqPayloadWhenRVDownloading:(id)a0;
+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })generateRawVideoRecallBizReqPayloadContent:(id)a0;
+ (unsigned long long)getRawVideoRecallSize:(id)a0 recallDuration:(unsigned int)a1 recallPercent:(unsigned int)a2;
+ (id)generateRawDownloadArgsWrap:(id)a0;
+ (id)generateC2CVideoPreviewMetaArgsWrap:(id)a0 aeskey:(id)a1 filesize:(unsigned long long)a2 savepath:(id)a3;
+ (id)generateC2CVideoPreviewDataArgsWrap:(id)a0 aeskey:(id)a1 url:(id)a2 filesize:(unsigned long long)a3 savepath:(id)a4;
+ (id)tryGetImgFromVideoPath:(id)a0 thumbImagePath:(id)a1 maskedThumbImagePath:(id)a2;
+ (BOOL)changeVideoMsgWrap:(id)a0 toDownloadStaus:(unsigned int)a1;
+ (BOOL)isMetadataAIGCEnable;
+ (id)getAIGCTagFromVideoPath:(id)a0;
+ (void)asyncWriteAIGCTag:(id)a0 toVideoPath:(id)a1 complete:(id /* block */)a2;
+ (BOOL)syncWriteAIGCTag:(id)a0 toVideoPath:(id)a1;
+ (void)preloadSvrRecallRawVideoWhenCompressVStartDownload:(id)a0;

@end
