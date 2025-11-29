@class NSString, CContact;

@interface WCFinderCommentMentionInfo : NSObject <WCTColumnCoding, PBCoding>

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long start;
@property (nonatomic) unsigned long long length;
@property (retain, nonatomic) CContact *mentionContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_start;
+ (void)PBArrayAdd_length;
+ (void)initialize;
+ (id)infoWithUsername:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)infoWithUsername:(id)a0 data:(id)a1;

@end
