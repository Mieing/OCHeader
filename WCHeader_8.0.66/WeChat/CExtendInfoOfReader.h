@class NSArray, NSString, CMessageWrap;

@interface CExtendInfoOfReader : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>

@property (retain, nonatomic) NSArray *m_arrReaderWaps;
@property (nonatomic) unsigned int m_mmreaderSubType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CMessageWrap *m_refMessageWrap;

+ (void)CreateExtendInfoWithUserName:(id)a0 retExtendInfo:(id *)a1 retIsContinueDispatch:(BOOL *)a2;

@end
