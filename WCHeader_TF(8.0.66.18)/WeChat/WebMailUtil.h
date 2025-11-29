@interface WebMailUtil : MMObject

+ (id)ConvertMailNodeList2NativeHTMLContent:(id)a0 imageAttachmentList:(id)a1;
+ (id)SystemConvertMailNodeList2HTMLContent:(id)a0;
+ (id)MailcompressImage:(id)a0;
+ (id)SystemConvertMailNode2HTMLContent:(id)a0 withImgIndex:(int)a1;
+ (id)ConvertMailNode2NativeHTMLContent:(id)a0 imageIndex:(unsigned long long *)a1 imageAttachmentList:(id)a2;
+ (id)ConvertMailNode2HTMLContent:(id)a0;

@end
