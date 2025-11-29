@class NSString, NSArray, NSDictionary;

@interface LSIMEvaluationResult : NSObject

@property (readonly, nonatomic) long long ratingResult;
@property (readonly, copy, nonatomic) NSString *tagString;
@property (readonly, copy, nonatomic) NSArray *tagArray;
@property (readonly, copy, nonatomic) NSString *remark;
@property (readonly, copy, nonatomic) NSString *useRemark;
@property (readonly, copy, nonatomic) NSDictionary *bizCommentExt;
@property (readonly, copy, nonatomic) NSString *bizCommentExtStr;
@property (readonly, nonatomic) unsigned long long fixedMark;
@property (readonly, nonatomic) double firstCommentAt;
@property (readonly, nonatomic) long long ratingModifyCount;
@property (readonly, nonatomic) long long maxModifyCount;
@property (readonly, nonatomic) double commentDeadline;
@property (readonly, copy, nonatomic) NSString *commentVersion;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *pigeonCid;
@property (readonly, copy, nonatomic) NSString *talkID;
@property (readonly, copy, nonatomic) NSString *remarkTagString;
@property (readonly, copy, nonatomic) NSDictionary *bizExt;

- (id)initWithInfo:(id)a0 resultDict:(id)a1;
- (id)initWithInfo:(id)a0 ratingResult:(long long)a1 selectedTagArray:(id)a2 remark:(id)a3 fixedMark:(unsigned long long)a4;
- (BOOL)isOldCommentVersion;
- (void).cxx_destruct;

@end
